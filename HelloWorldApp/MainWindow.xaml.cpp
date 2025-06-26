#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::HelloWorldApp::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    void MainWindow::OnButtonClick(IInspectable const&, RoutedEventArgs const&)
    {
        HelloText().Text(L"Button clicked! Hello from WinUI 3!");
    }
}