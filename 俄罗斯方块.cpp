#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

// 游戏常量定义
#define WIDTH 10     // 游戏区域宽度
#define HEIGHT 20    // 游戏区域高度
#define BLOCK_SIZE 4 // 方块大小（4x4）

// 方块类型定义
typedef enum {
    EMPTY,
    I, J, L, O, S, T, Z
} BlockType;

// 坐标结构体
typedef struct {
    int x;
    int y;
} Point;

// 游戏状态结构体
typedef struct {
    BlockType board[HEIGHT][WIDTH]; // 游戏区域
    BlockType currentBlock;         // 当前方块类型
    Point position;                 // 当前方块位置
    int rotation;                   // 当前方块旋转状态
    int score;                      // 得分
    int gameOver;                   // 游戏是否结束
} GameState;

// 定义所有方块的形状（简化的2种旋转状态，初学者友好）
BlockType blocks[7][2][BLOCK_SIZE][BLOCK_SIZE] = {
    // I型方块
    {{
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {I,     I,     I,     I    },
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, EMPTY, I, EMPTY},
        {EMPTY, EMPTY, I, EMPTY},
        {EMPTY, EMPTY, I, EMPTY},
        {EMPTY, EMPTY, I, EMPTY}
    }},
    // J型方块
    {{
        {J, EMPTY, EMPTY, EMPTY},
        {J, J,     J,     EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, J, J, EMPTY},
        {EMPTY, J, EMPTY, EMPTY},
        {EMPTY, J, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }},
    // L型方块
    {{
        {EMPTY, EMPTY, L, EMPTY},
        {L,     L,     L,     EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, L, EMPTY, EMPTY},
        {EMPTY, L, EMPTY, EMPTY},
        {L,     L, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }},
    // O型方块（不需要旋转）
    {{
        {EMPTY, O, O, EMPTY},
        {EMPTY, O, O, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, O, O, EMPTY},
        {EMPTY, O, O, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }},
    // S型方块
    {{
        {EMPTY, S, S, EMPTY},
        {S,     S, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {S, EMPTY, EMPTY, EMPTY},
        {S, S,     EMPTY, EMPTY},
        {EMPTY, S, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }},
    // T型方块
    {{
        {EMPTY, T, EMPTY, EMPTY},
        {T,     T, T,     EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, T, EMPTY, EMPTY},
        {T,     T, EMPTY, EMPTY},
        {EMPTY, T, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }},
    // Z型方块
    {{
        {Z,     Z, EMPTY, EMPTY},
        {EMPTY, Z, Z,     EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }, {
        {EMPTY, Z, EMPTY, EMPTY},
        {Z,     Z, EMPTY, EMPTY},
        {Z,     EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY}
    }}
};

// 初始化游戏状态
void initGame(GameState *game) {
    // 初始化游戏区域为空
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            game->board[i][j] = EMPTY;
        }
    }
    
    game->score = 0;
    game->gameOver = 0;
    
    // 生成第一个方块
    srand(time(NULL));
    game->currentBlock = rand() % 7;
    game->position.x = WIDTH / 2 - 2;
    game->position.y = 0;
    game->rotation = 0;
}

// 设置光标位置
void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 清屏函数
void clearScreen() {
    system("cls");
}

// 绘制游戏区域和当前方块
void drawGame(GameState *game) {
    clearScreen();
    
    // 绘制游戏边框
    for (int i = 0; i < HEIGHT + 2; i++) {
        for (int j = 0; j < WIDTH + 2; j++) {
            setCursorPosition(j * 2, i);
            if (i == 0 || i == HEIGHT + 1) {
                printf("[]"); // 顶部和底部边框
            } else if (j == 0 || j == WIDTH + 1) {
                printf("[]"); // 左右边框
            } else {
                // 绘制游戏区域中的方块
                if (game->board[i - 1][j - 1] != EMPTY) {
                    printf("[]"); // 已固定的方块
                } else {
                    // 检查是否是当前移动的方块的一部分
                    int blockX = j - 1 - game->position.x;
                    int blockY = i - 1 - game->position.y;
                    if (blockX >= 0 && blockX < BLOCK_SIZE && blockY >= 0 && blockY < BLOCK_SIZE && 
                        blocks[game->currentBlock][game->rotation][blockY][blockX] != EMPTY) {
                        printf("[]"); // 当前移动的方块
                    } else {
                        printf("  "); // 空白区域
                    }
                }
            }
        }
    }
    
    // 显示得分
    setCursorPosition((WIDTH + 4) * 2, 5);
    printf("得分: %d", game->score);
    
    // 显示操作说明
    setCursorPosition((WIDTH + 4) * 2, 8);
    printf("操作说明:");
    setCursorPosition((WIDTH + 4) * 2, 9);
    printf("← →: 左右移动");
    setCursorPosition((WIDTH + 4) * 2, 10);
    printf("↓: 加速下落");
    setCursorPosition((WIDTH + 4) * 2, 11);
    printf("空格: 旋转");
    setCursorPosition((WIDTH + 4) * 2, 12);
    printf("ESC: 退出游戏");
}

// 碰撞检测函数
int checkCollision(GameState *game, int deltaX, int deltaY, int newRotation) {
    // 检查每个方块单元格是否会发生碰撞
    for (int y = 0; y < BLOCK_SIZE; y++) {
        for (int x = 0; x < BLOCK_SIZE; x++) {
            if (blocks[game->currentBlock][newRotation][y][x] != EMPTY) {
                int newX = game->position.x + x + deltaX;
                int newY = game->position.y + y + deltaY;
                
                // 检查是否超出边界
                if (newX < 0 || newX >= WIDTH || newY >= HEIGHT) {
                    return 1; // 碰撞
                }
                
                // 检查是否与已固定的方块重叠（忽略顶部边界外的部分）
                if (newY >= 0 && game->board[newY][newX] != EMPTY) {
                    return 1; // 碰撞
                }
            }
        }
    }
    return 0; // 无碰撞
}

// 移动方块函数
void moveBlock(GameState *game, int deltaX, int deltaY) {
    if (!checkCollision(game, deltaX, deltaY, game->rotation)) {
        game->position.x += deltaX;
        game->position.y += deltaY;
    } else if (deltaY > 0) {
        // 如果下移发生碰撞，固定当前方块
        fixBlock(game);
        // 生成新方块
        game->currentBlock = rand() % 7;
        game->position.x = WIDTH / 2 - 2;
        game->position.y = 0;
        game->rotation = 0;
        
        // 检查游戏是否结束（新方块一出现就碰撞）
        if (checkCollision(game, 0, 0, game->rotation)) {
            game->gameOver = 1;
        }
    }
}

// 旋转方块函数
void rotateBlock(GameState *game) {
    int newRotation = (game->rotation + 1) % 2; // 简化为2种旋转状态
    if (!checkCollision(game, 0, 0, newRotation)) {
        game->rotation = newRotation;
    }
}

// 固定方块到游戏区域
void fixBlock(GameState *game) {
    for (int y = 0; y < BLOCK_SIZE; y++) {
        for (int x = 0; x < BLOCK_SIZE; x++) {
            if (blocks[game->currentBlock][game->rotation][y][x] != EMPTY) {
                int boardX = game->position.x + x;
                int boardY = game->position.y + y;
                if (boardX >= 0 && boardX < WIDTH && boardY >= 0 && boardY < HEIGHT) {
                    game->board[boardY][boardX] = game->currentBlock;
                }
            }
        }
    }
    
    // 检查并消除已满的行
    checkAndClearLines(game);
}

// 消除指定行并将上面的行下移
void clearLine(GameState *game, int line) {
    // 将上面的所有行下移
    for (int i = line; i > 0; i--) {
        for (int j = 0; j < WIDTH; j++) {
            game->board[i][j] = game->board[i - 1][j];
        }
    }
    
    // 清空最顶部的行
    for (int j = 0; j < WIDTH; j++) {
        game->board[0][j] = EMPTY;
    }
}

// 检查并消除已满的行
void checkAndClearLines(GameState *game) {
    int linesCleared = 0;
    
    for (int i = HEIGHT - 1; i >= 0; i--) {
        int isFullLine = 1;
        
        // 检查当前行是否已满
        for (int j = 0; j < WIDTH; j++) {
            if (game->board[i][j] == EMPTY) {
                isFullLine = 0;
                break;
            }
        }
        
        // 如果行已满，消除该行
        if (isFullLine) {
            clearLine(game, i);
            linesCleared++;
            i++; // 重新检查当前位置（因为上面的行下移了）
        }
    }
    
    // 根据消除的行数增加得分
    if (linesCleared > 0) {
        // 简单的得分规则：消除1行得100分，2行得300分，3行得500分，4行得800分
        switch (linesCleared) {
            case 1: game->score += 100; break;
            case 2: game->score += 300; break;
            case 3: game->score += 500; break;
            case 4: game->score += 800; break;
        }
    }
}

// 游戏主循环
int main() {
    GameState game;
    initGame(&game);
    
    // 设置控制台标题
    SetConsoleTitle("俄罗斯方块游戏");
    
    // 设置初始绘制
    drawGame(&game);
    
    // 游戏主循环
    while (!game.gameOver) {
        // 处理用户输入
        if (_kbhit()) {
            char key = _getch();
            
            // 处理特殊键（方向键等）
            if (key == 0 || key == 224) {
                key = _getch(); // 读取第二个字节
                switch (key) {
                    case 75: // 左箭头
                        moveBlock(&game, -1, 0);
                        drawGame(&game);
                        break;
                    case 77: // 右箭头
                        moveBlock(&game, 1, 0);
                        drawGame(&game);
                        break;
                    case 80: // 下箭头
                        moveBlock(&game, 0, 1);
                        drawGame(&game);
                        break;
                }
            } else {
                // 处理普通键
                switch (key) {
                    case ' ':
                    case 'w': // 空格键或W键旋转
                        rotateBlock(&game);
                        drawGame(&game);
                        break;
                    case 'a': // A键左移
                        moveBlock(&game, -1, 0);
                        drawGame(&game);
                        break;
                    case 'd': // D键右移
                        moveBlock(&game, 1, 0);
                        drawGame(&game);
                        break;
                    case 's': // S键下移
                        moveBlock(&game, 0, 1);
                        drawGame(&game);
                        break;
                    case 27: // ESC键退出
                        return 0;
                }
            }
        }
        
        // 自动下落（简单计时）
        Sleep(500); // 每500毫秒下落一次
        moveBlock(&game, 0, 1);
        drawGame(&game);
    }
    
    // 游戏结束显示
    clearScreen();
    setCursorPosition(20, 10);
    printf("游戏结束！");
    setCursorPosition(20, 11);
    printf("最终得分: %d", game.score);
    setCursorPosition(20, 13);
    printf("按任意键退出...");
    _getch();
    
    return 0;
}

