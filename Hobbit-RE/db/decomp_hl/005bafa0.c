
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005bafa0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  FUN_005af120();
  uVar5 = FUN_00592190();
  FUN_00549470(uVar5);
  FUN_00549580(uVar5);
  iVar6 = FUN_0053cb40(s_EyelidULNub_00745934,0);
  FUN_005af120();
  uVar5 = FUN_00592190();
  FUN_00549470(uVar5);
  FUN_00549580(uVar5);
  iVar7 = FUN_0053cb40(s_EyelidURNub_00745928,0);
  FUN_005af120();
  iVar8 = FUN_00592190();
  if (*(int *)(iVar8 + 0x13c) != 0) {
    FUN_005423d0();
  }
  fVar1 = *(float *)(*(int *)(iVar8 + 0x140) + iVar6 * 0xc);
  iVar6 = *(int *)(iVar8 + 0x140) + iVar6 * 0xc;
  fVar2 = *(float *)(iVar6 + 4);
  fVar3 = *(float *)(iVar6 + 8);
  FUN_005af120();
  iVar6 = FUN_00592190();
  if (*(int *)(iVar6 + 0x13c) != 0) {
    FUN_005423d0();
  }
  iVar6 = *(int *)(iVar6 + 0x140);
  fVar4 = (*(float *)(iVar6 + 4 + iVar7 * 0xc) + fVar2) * _DAT_006e936c;
  fVar2 = (*(float *)(iVar6 + 8 + iVar7 * 0xc) + fVar3) * _DAT_006e936c;
  *(float *)(param_1 + 0x98) = (*(float *)(iVar6 + iVar7 * 0xc) + fVar1) * _DAT_006e936c;
  *(float *)(param_1 + 0xa0) = fVar2;
  *(float *)(param_1 + 0x9c) = fVar4;
  uVar9 = FUN_0041bcd0();
  iVar6 = FUN_005bacd0(uVar9);
  if (iVar6 != 0) {
    *(float *)(param_1 + 100) = _DAT_006f42c4 * param_2 + *(float *)(param_1 + 100);
  }
  return;
}

