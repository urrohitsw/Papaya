#pragma once

namespace Platform
{
    void Print(char* Message);
    void StartMouseCapture();
    void ReleaseMouseCapture();
    void SetMousePosition(Vec2i Pos);
    void SetCursorVisibility(bool Visible);
    char* OpenFileDialog();
    char* SaveFileDialog();

    int64 GetMilliseconds();
}
