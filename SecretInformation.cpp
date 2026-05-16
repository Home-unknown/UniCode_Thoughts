#include"workerManager.h"
#include<iostream>
#include <cmath>
#include <windows.h>
#include <ctime>
using std::cout, std::endl, std::cin;

// 全局配置（可直接修改调整效果）
const float SCALE = 1.8f;       // 爱心大小（值越大越占屏，默认1.8）
const int GRADIENT_LAYERS = 5;  // 颜色渐变层数（默认5层）
const int BLINK_INTERVAL = 300; // 闪烁间隔（毫秒，默认300）
const bool ENABLE_BLINK = false; // 是否开启闪烁（true/false）

void SetColor(int color)                                // 设置控制台颜色（Windows API）
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// 生成彩色爱心
void DrawColoredHeart() 
{
    float x, y;
    
    system("cls");                              // 清空控制台（实现闪烁效果）
    
    for (y = SCALE; y > -SCALE; y -= 0.08f)     // 遍历坐标（根据SCALE调整范围）
    {
        for (x = -SCALE; x < SCALE; x += 0.04f) 
        {
            float a = x * x + y * y - 1;            // 爱心公式：(x*x + y*y -1) - x*y = 0
            
            if (a * a * a - x * x * pow(y, 3) <= 0)  // 多色渐变：根据y坐标映射颜色（从浅粉到深红+紫色）
            {
                float ratio = (y + SCALE) / (2 * SCALE); // 归一化到[0,1]
                int colorIdx = (int)(ratio * GRADIENT_LAYERS);

                switch (colorIdx) 
                {
                case 0: // 浅粉
                    SetColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
                    break; 
                case 1: // 粉色
                    SetColor(FOREGROUND_RED | FOREGROUND_GREEN); 
                    break;                       
                case 2: // 亮红
                    SetColor(FOREGROUND_RED | FOREGROUND_INTENSITY); 
                    break;                    
                case 3: // 深红
                    SetColor(FOREGROUND_RED); 
                    break;                                           
                case 4: // 紫红（新增渐变层）
                    SetColor(FOREGROUND_RED | FOREGROUND_BLUE); 
                    break;                         
                default: 
                    SetColor(FOREGROUND_RED); 
                    break;
                }
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    SetColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // 恢复默认颜色
}

void WorkerManager::SecretInformation()
{
    int num = 0;
    cout << "请问安徽大学是192几年创建的？" << endl;
    cin >> num;

    if (num == 8)
    {
        if (ENABLE_BLINK) // 动态闪烁逻辑
        {
            while (true)
            {
                DrawColoredHeart();
                Sleep(BLINK_INTERVAL); // 间隔指定时间刷新
            }
        }
        else
        {
            DrawColoredHeart();        // 静态显示
        }
    }
    else
    {
        cout << "回答错误" << endl;
    }
    exit(0);
    system("pause");
}