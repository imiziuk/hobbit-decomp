
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423c90(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x420) != param_2) {
    *(int *)(param_1 + 0x420) = param_2;
    *(undefined4 *)(param_1 + 0x4ebc) = 0x3f800000;
    if (param_3 == 0) {
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x4ea8) = 0xff;
        FUN_00589cc0((undefined1 *)(param_1 + 0x4ea8),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
      }
      else {
        FUN_00589260(param_1 + 0x4ea8,0x80,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1ac),1,
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      }
      iVar2 = FUN_00423c80();
      if (iVar2 == 0) {
        FUN_00425dd0(0);
        uVar6 = *(undefined4 *)(param_1 + 0xc);
        uVar5 = *(undefined4 *)(param_1 + 8);
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1d0);
        uVar3 = 0;
      }
      else {
        FUN_00425d60();
        uVar6 = *(undefined4 *)(param_1 + 0xc);
        uVar5 = *(undefined4 *)(param_1 + 8);
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1d0);
        uVar3 = 0x3f800000;
      }
      FUN_005893e0(param_1 + 0x4eb8,uVar3,uVar4,1,uVar5,uVar6);
      return;
    }
    FUN_00589cc0((char *)(param_1 + 0x4ea8),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    pfVar1 = (float *)(param_1 + 0x4eb8);
    FUN_00589cc0(pfVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    *(char *)(param_1 + 0x4ea8) = ((param_2 == 0) - 1U & 0x81) - 1;
    iVar2 = FUN_00423c80();
    if (iVar2 == 0) {
      FUN_00425dd0(1);
      *pfVar1 = 0.0;
    }
    else {
      *pfVar1 = 1.0;
    }
    FUN_004f3140(*pfVar1);
    if (_DAT_006e936c <= *pfVar1) {
      FUN_00587cf0(1);
      return;
    }
    FUN_00587cf0(0);
  }
  return;
}

