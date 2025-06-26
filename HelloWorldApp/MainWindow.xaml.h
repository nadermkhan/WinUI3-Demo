#pragma once
#include "MainWindow.g.h"

namespace winrt::HelloWorldApp::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void OnButtonClick(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::HelloWorldApp::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}