#include "StdInc.h"

void CRoadBlocks::InjectHooks() {
    using namespace ReversibleHooks;
    // Install("CRoadBlocks", "Init", 0x461100, &CRoadBlocks::Init);
    // Install("CRoadBlocks", "ClearScriptRoadBlocks", 0x460EC0, &CRoadBlocks::ClearScriptRoadBlocks);
    // Install("CRoadBlocks", "ClearSpaceForRoadBlockObject", 0x461020, &CRoadBlocks::ClearSpaceForRoadBlockObject);
    // Install("CRoadBlocks", "CreateRoadBlockBetween2Points", 0x4619C0, &CRoadBlocks::CreateRoadBlockBetween2Points);
    // Install("CRoadBlocks", "GenerateRoadBlockCopsForCar", 0x461170, &CRoadBlocks::GenerateRoadBlockCopsForCar);
    // Install("CRoadBlocks", "GenerateRoadBlocks", 0x4629E0, &CRoadBlocks::GenerateRoadBlocks);
    // Install("CRoadBlocks", "GetRoadBlockNodeInfo", 0x460EE0, &CRoadBlocks::GetRoadBlockNodeInfo);
    // Install("CRoadBlocks", "RegisterScriptRoadBlock", 0x460DF0, &CRoadBlocks::RegisterScriptRoadBlock);
}

// 0x461100
void CRoadBlocks::Init() {
    plugin::Call<0x461100>();
}

// 0x460EC0
void CRoadBlocks::ClearScriptRoadBlocks() {
    plugin::Call<0x460EC0>();
}

// 0x461020
void CRoadBlocks::ClearSpaceForRoadBlockObject(CVector a1, CVector a2) {
    plugin::Call<0x461020, CVector, CVector>(a1, a2);
}

// 0x4619C0
void CRoadBlocks::CreateRoadBlockBetween2Points(CVector a1, CVector a2, uint32 a3) {
    plugin::Call<0x4619C0, CVector, CVector, uint32>(a1, a2, a3);
}

// 0x461170
void CRoadBlocks::GenerateRoadBlockCopsForCar(CVehicle* vehicle, int32 pedsPositionsType, ePedType type) {
    plugin::Call<0x461170, CVehicle*, int32, ePedType>(vehicle, pedsPositionsType, type);
}

// 0x4629E0
void CRoadBlocks::GenerateRoadBlocks() {
    plugin::Call<0x4629E0>();
}

// 0x460EE0
bool CRoadBlocks::GetRoadBlockNodeInfo(CNodeAddress a1, float& a2, CVector& a3) {
    return plugin::CallAndReturn<bool, 0x460EE0, CNodeAddress, float, CVector>(a1, a2, a3);
}

// 0x460DF0
void CRoadBlocks::RegisterScriptRoadBlock(CVector a1, CVector a2, bool a3) {
    plugin::Call<0x460DF0, CVector, CVector, bool>(a1, a2, a3);
}