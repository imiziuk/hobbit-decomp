
void __fastcall FUN_00595e80(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdateAnim_00743080);
  local_4 = 0;
  if (*(int *)(param_1 + 0x158) == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  iVar1 = FUN_00592920();
  if ((((*(byte *)(iVar1 + 0x268) & 1) == 0) ||
      (iVar1 = *(int *)(param_1 + 0x158), (*(uint *)(iVar1 + 0x78) & 0x8000) == 0x8000)) ||
     ((iVar5 = *(int *)(iVar1 + 4), iVar5 != 1 && ((iVar5 != 3 && (iVar5 != 0x38)))))) {
    fVar7 = *(float *)(*(int *)(param_1 + 0x158) + 0x58);
    iVar1 = param_1 + 0x228;
    iVar5 = param_1 + 0x21c;
    FUN_00592920(iVar5,iVar1);
    fVar6 = (float10)FUN_004a11a0();
    fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x294) * (float10)fVar7;
  }
  else {
    fVar7 = *(float *)(iVar1 + 0x58);
    iVar1 = param_1 + 0x228;
    iVar5 = param_1 + 0x21c;
    FUN_00592920(iVar5,iVar1);
    fVar6 = (float10)FUN_004a11a0();
    fVar6 = ((float10)fVar7 + (float10)*(float *)(param_1 + 0x18c)) * fVar6 *
            (float10)*(float *)(param_1 + 0x294);
  }
  fVar7 = (float)fVar6;
  FUN_00592190(fVar7);
  FUN_00540900(fVar7,iVar5,iVar1);
  fVar7 = *(float *)(*(int *)(param_1 + 0x158) + 0x5c);
  *(float *)(param_1 + 0x21c) = fVar7 * *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0x220) = fVar7 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x224) = fVar7 * *(float *)(param_1 + 0x224);
  iVar1 = FUN_00592190();
  if ((*(int *)(*(int *)(iVar1 + 0x10c) + 0x14) == *(int *)(*(int *)(iVar1 + 0x10c) + 0x20) + 1) &&
     ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x8000) != 0x8000)) {
    iVar1 = FUN_00592920();
    if (*(char *)(iVar1 + 0x268) < '\0') {
      iVar1 = FUN_00592920();
      if ((*(byte *)(iVar1 + 0x268) & 1) != 0) {
        piVar2 = (int *)FUN_00592920();
        piVar3 = (int *)FUN_00592920();
        iVar1 = *piVar3;
        uVar4 = (**(code **)(*piVar2 + 0x2c))(0);
        (**(code **)(iVar1 + 0x14))(uVar4);
      }
    }
  }
  iVar1 = FUN_00592190();
  if (((0 < *(int *)(iVar1 + 0xe0)) ||
      (fVar7 = (float)(*(int *)(iVar1 + 0xd8) + -2),
      fVar7 < *(float *)(iVar1 + 0xdc) != (fVar7 == *(float *)(iVar1 + 0xdc)))) &&
     (0 < *(int *)(param_1 + 0x144))) {
    FUN_00592ae0(**(undefined4 **)(param_1 + 0x148),0,0xbf800000,1);
    iVar1 = *(int *)(param_1 + 0x144) + -1;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x148)) =
             *(undefined4 *)(iVar5 + 4 + *(int *)(param_1 + 0x148));
        iVar5 = iVar5 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

