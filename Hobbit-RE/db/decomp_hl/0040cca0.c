
void __fastcall FUN_0040cca0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0054c0f0(s_Canal_Bellows_001_0071e28c,1);
  uVar1 = FUN_004e7b60();
  FUN_0040ce00(uVar1);
  FUN_0054c0f0(s_Canal_Cooler_001_0071e278,1);
  uVar1 = FUN_004e7b60();
  FUN_0040cfa0(uVar1);
  FUN_0054c0f0(s_Canal_Gear_Room_001_0071e318,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d0e0(uVar1);
  FUN_0054c0f0(s_Canal_Treasury_001_0071e32c,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d400(uVar1);
  FUN_0054c0f0(s_WaterPuzzleExitCanal0_West_0071e2e0,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d310(0,uVar1);
  FUN_0054c0f0(s_WaterPuzzleExitCanal1_West_0071e2fc,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d310(1,uVar1);
  FUN_0054c0f0(s_WaterPuzzleExitCanal5_East_0071e2bc,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d310(2,uVar1);
  FUN_0054c0f0(s_WaterPuzzleExitCanal4_East_0071e2a0,1);
  uVar1 = FUN_004e7b60();
  FUN_0040d310(3,uVar1);
  if ((*(uint *)(param_1 + 0x1630) & 0x20000) == 0) {
    iVar2 = FUN_0040cc50();
    if (iVar2 != 0) {
      FUN_0040d3a0();
      return;
    }
  }
  return;
}

