
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0056c2a0(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((param_3 == 0) && (param_2 < *(int *)(param_1 + 0x480))) &&
     ((param_2 != 7 || (*(int *)(param_1 + 0x480) != 8)))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x480) != param_2) {
    *(undefined4 *)(param_1 + 0x690) = 0;
    *(undefined4 *)(param_1 + 0x694) = 0;
    *(undefined4 *)(param_1 + 0x688) = 0;
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 4 | 2;
  }
  *(int *)(param_1 + 0x480) = param_2;
  FUN_00571230();
  switch(*(undefined4 *)(param_1 + 0x480)) {
  case 1:
    puVar2 = *(undefined4 **)(param_1 + 0x730);
    FUN_0045c560(puVar2[0x31],*puVar2,puVar2[1],puVar2[0x2d],0x461c4000,puVar2[0x36]);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0xe0;
    if (((*(int *)(param_1 + 0x6a8) != 0 || *(int *)(param_1 + 0x6ac) != 0) &&
        (iVar3 = FUN_004021c0(*(int *)(param_1 + 0x6a8),*(int *)(param_1 + 0x6ac)), iVar3 != 0)) &&
       ((*(byte *)(iVar3 + 0x7a) & 4) != 0)) {
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x10;
      FUN_00429100();
      return 1;
    }
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x730);
    FUN_0045c560(*(undefined4 *)(iVar3 + 0xc4),*(undefined4 *)(iVar3 + 0x30),
                 *(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0xb4),0x461c4000,
                 *(undefined4 *)(iVar3 + 0xd8));
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x60;
    FUN_00429100();
    return 1;
  case 3:
  case 5:
    pfVar1 = *(float **)(param_1 + 0x730);
    FUN_0045c560(pfVar1[0x31],*pfVar1 * _DAT_006e99bc,pfVar1[1] * _DAT_006e99bc,pfVar1[0x2d],
                 0x461c4000,pfVar1[0x36]);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x10;
    FUN_00429100();
    return 1;
  case 4:
    puVar2 = *(undefined4 **)(param_1 + 0x730);
    FUN_0045c560(puVar2[0x31],*puVar2,puVar2[1],puVar2[0x2d],0x461c4000,puVar2[0x36]);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x20;
    FUN_00429100();
    return 1;
  case 6:
    pfVar1 = *(float **)(param_1 + 0x730);
    FUN_0045c560(pfVar1[0x31],*pfVar1 * _DAT_006e9550,pfVar1[1] * _DAT_006e9550,pfVar1[0x2d],
                 0x461c4000,pfVar1[0x36]);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0xe0;
    FUN_00429100();
    return 1;
  case 7:
    puVar2 = *(undefined4 **)(param_1 + 0x730);
    FUN_0045c560(puVar2[0x31],*puVar2,puVar2[1],puVar2[0x2d],0x461c4000,puVar2[0x36]);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 8;
    FUN_00429100();
    return 1;
  case 8:
    puVar2 = *(undefined4 **)(param_1 + 0x730);
    FUN_0045c560(puVar2[0x31],*puVar2,puVar2[1],puVar2[0x2d],0x461c4000,puVar2[0x36]);
  }
  FUN_00429100();
  return 1;
}

