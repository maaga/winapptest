#include <windows.h>

int WINAPI WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    int id;

    id = MessageBox(NULL, TEXT("Hello, world!"), TEXT("Test"), MB_OKCANCEL);

    switch (id) {
    case IDOK:
        MessageBox(NULL, TEXT("OK��������܂���"), TEXT("����"), MB_OK);
        break;

    case IDCANCEL:
        MessageBox(NULL, TEXT("�L�����Z����������܂���"), TEXT("����"), MB_OK);
        break;
    }

    return 0;
}