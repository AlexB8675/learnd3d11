#pragma once

#include <cstdint>
#include <memory>
#include <string_view>

// ReSharper disable once CppInconsistentNaming
struct GLFWwindow;
class Input;

class Application
{
public:
    Application(const std::string_view title);
    virtual ~Application();
    void Run();

protected:
    virtual void Cleanup();
    virtual bool Initialize();
    virtual void Render() = 0;
    virtual void Update() = 0;

private:
    GLFWwindow* _window = nullptr;
    int32_t _width = 0;
    int32_t _height = 0;
    std::string_view _title;
};
