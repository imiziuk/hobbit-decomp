
void __fastcall FUN_00680a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (*(int *)(iVar2 + 0x40) != 0) {
    FUN_00647d70(param_1 + 2,iVar2,0x40);
    *(undefined1 *)((int)param_1 + 0x47) = 0;
    param_1[0x53] = *(int *)(iVar2 + 0x40);
    param_1[0x54] = *(int *)(iVar2 + 0x44);
    param_1[0x55] = *(int *)(iVar2 + 0x48);
    param_1[0x56] = *(int *)(iVar2 + 0x4c);
    param_1[0x57] = *(int *)(iVar2 + 0x50);
    param_1[0x58] = *(int *)(iVar2 + 0x54);
    param_1[0x59] = *(int *)(iVar2 + 0x58);
    param_1[0x5a] = *(int *)(iVar2 + 0x5c);
    param_1[0x5b] = *(int *)(iVar2 + 0x60);
    param_1[0x5c] = *(int *)(iVar2 + 100);
    iVar2 = *(int *)(iVar2 + 0x68);
    param_1[0x5d] = iVar2;
    iVar4 = 0;
    param_1[0x99] = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    iVar5 = iVar2;
    if (0 < param_1[0x5a]) {
      do {
        uVar3 = thunk_FUN_0064ff70(param_1[0x5b],s_C__projects_meridian_xCore_entro_00753ad4,0x1ab);
        *(undefined4 *)(iVar5 + 0x20) = uVar3;
        iVar2 = iVar5 + 0x128;
        *(int *)(iVar5 + 0x124) = iVar2;
        iVar4 = iVar4 + 1;
        iVar5 = iVar2;
      } while (iVar4 < param_1[0x5a]);
    }
    *(undefined4 *)(iVar2 + -4) = 0;
    piVar1 = param_1 + 0x7a;
    param_1[0x5e] = param_1[0x5d];
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x98] = 0;
    param_1[0x7b] = (int)piVar1;
    *piVar1 = (int)piVar1;
    param_1[0x7d] = 3;
    FUN_00655630(0,1);
    return;
  }
  FUN_00647d70(param_1 + 2,s_UNSUPPORTED_00753b10,0x40);
  piVar1 = param_1 + 0x7a;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x52] = -1;
  param_1[0x7b] = (int)piVar1;
  *piVar1 = (int)piVar1;
  return;
}

