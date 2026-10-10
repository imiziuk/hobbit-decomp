
void __fastcall FUN_006ba3b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  iVar2 = param_1[0x28];
  if (0 < *(int *)(iVar2 + 0x10)) {
    do {
      piVar1 = *(int **)(param_1[0x27] + iVar5 * 4);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x28) + iVar5 * 4);
      if (param_1[0xb] != 0) {
        FUN_006bb010(param_1[10]);
      }
      fVar6 = (float10)(**(code **)*param_1)();
      if ((float10)*(float *)(iVar2 + 0x78) <= fVar6) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(param_1);
        if (iVar2 == 0) {
          FUN_006bb030();
          (**(code **)(*piVar1 + 8))(param_1);
        }
      }
      iVar2 = param_1[0x28];
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x10));
  }
  param_1[0xb] = 0;
  if (DAT_00815c90 != 0) {
    if (DAT_00815c84 != 0) {
      FUN_0066a800(param_1 + 7,0xffff0000);
    }
    if (DAT_00815c8c != 0) {
      uVar3 = (**(code **)(*param_1 + 4))(0xffff0000);
      FUN_00669cf0(uVar3);
    }
    if ((DAT_00815c80 != 0) || (DAT_00815c88 != 0)) {
      FUN_0066d9c0(param_1 + 0xc);
      if (DAT_00815c80 != 0) {
        FUN_0066ab60(0x40a00000);
      }
      if (DAT_00815c88 != 0) {
        uVar7 = 0xff0000ff;
        uVar3 = FUN_00401f00(0x3f000000,0x3f000000,0x3f000000);
        uVar4 = FUN_00401f00(0xbf000000,0xbf000000,0xbf000000);
        uVar3 = FUN_004ace90(uVar4,uVar3);
        FUN_00669cf0(uVar3,uVar7);
      }
      FUN_0066dac0();
      return;
    }
  }
  return;
}

