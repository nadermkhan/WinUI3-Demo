# Hello World WinUI 3 App

A simple Hello World application built with WinUI 3 and C++, featuring GitHub Actions CI/CD.

## Features
- Basic WinUI 3 window with a text block and button
- Click the button to change the text
- Automated builds using GitHub Actions
- MSIX packaging with code signing

## Building Locally
1. Install Visual Studio 2022 with:
   - Desktop development with C++
   - Windows App SDK
   - Windows 10/11 SDK

2. Open `HelloWorldApp.sln` in Visual Studio
3. Build and run (F5)

## CI/CD
This project uses GitHub Actions to automatically build and package the application on every push to main.

The workflow:
- Builds the app in Release mode for x64
- Signs the MSIX package
- Uploads the package as a build artifact

## License
MIT