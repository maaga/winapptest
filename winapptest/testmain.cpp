#include <windows.h>

int WINAPI WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    int id;

    id = MessageBox(NULL, TEXT("Hello, world!"), TEXT("Test"), MB_OKCANCEL);

    switch (id) {
    case IDOK:
        MessageBox(NULL, TEXT("OKが押されました"), TEXT("結果"), MB_OK);
        break;

    case IDCANCEL:
        MessageBox(NULL, TEXT("キャンセルが押されました"), TEXT("結果"), MB_OK);
        break;
    }

    return 0;
}