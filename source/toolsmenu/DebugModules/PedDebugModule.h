#pragma once

#include "DebugModule.h"

struct PedInfo;

class PedDebugModule final : public DebugModule {
public:
    void RenderWindow() override final;
    void RenderMenuEntry() override final;
    void Render3D() override final;

    NOTSA_IMPLEMENT_DEBUG_MODULE_SERIALIZATION(PedDebugModule, m_CollapseToggleDist, m_DrawDist, m_IsVisible, m_AutoCollapseEnabled, m_IsOpen, m_VisualiseTasks);

private:
    void ProcessPed(struct PedInfo&);

private:
    float m_CollapseToggleDist{ 20.f };
    float m_DrawDist{ 200.f };
    bool  m_IsVisible{};
    bool  m_AutoCollapseEnabled{};
    bool  m_IsOpen{};
    bool  m_VisualiseTasks{};
    std::vector<CPed*> m_LastProcessedPeds{};
};
