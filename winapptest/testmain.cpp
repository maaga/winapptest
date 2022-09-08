#include <windows.h>

int WINAPI WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    int id;

    id = MessageBox(NULL, TEXT("Hello, world!"), TEXT("Test"), MB_OKCANCEL);

    switch (id) {
    case IDOK:
        MessageBox(NULL, TEXT("OK‚ª‰Ÿ‚³‚ê‚Ü‚µ‚½"), TEXT("Œ‹‰Ê"), MB_OK);
        break;

    case IDCANCEL:
        MessageBox(NULL, TEXT("ƒLƒƒƒ“ƒZƒ‹‚ª‰Ÿ‚³‚ê‚Ü‚µ‚½"), TEXT("Œ‹‰Ê"), MB_OK);
        break;
    }

    return 0;
}