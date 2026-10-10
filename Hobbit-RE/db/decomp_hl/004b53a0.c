
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_004b53a0(uint param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  uint unaff_retaddr;
  undefined8 uStack_94;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d439a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0054bad0();
  FUN_00649600();
  local_4 = 0;
  iVar2 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar2 == -1) {
    FUN_00649720();
    piVar6 = (int *)0x0;
  }
  else {
    uVar1 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
    FUN_00649720();
  }
  iVar2 = param_2;
  piVar6[0x60] = param_1;
  piVar6[100] = 0x3f800000;
  piVar6[0x1a] = 0;
  piVar6[0x1b] = 0;
  piVar6[0x1c] = 0;
  piVar6[0x58] = param_2;
  piVar6[0x59] = param_3;
  if (*(int *)(&DAT_0075d498 + param_1 * 0x24) != 0) {
    FUN_005496c0();
    FUN_00549430();
  }
  (**(code **)(*piVar6 + 0x14))();
  piVar6[0x65] = param_5;
  piVar6[0x66] = param_6;
  piVar6[0x67] = param_7;
  switch(param_1) {
  case 0:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x1;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049be20();
    }
    piVar6[0x56] = (int)piVar5;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar5 + 8))();
    goto LAB_004b60ab;
  case 1:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x2;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049be20();
    }
    piVar6[0x56] = (int)piVar5;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar5 + 8))();
    goto LAB_004b60ab;
  case 2:
    piVar6[0x66] = (int)((float)piVar6[0x66] + _DAT_006ee500);
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x3;
    if (pvVar4 == (void *)0x0) {
LAB_004b5629:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    goto LAB_004b562b;
  case 3:
    piVar6[0x66] = (int)((float)piVar6[0x66] + _DAT_006ee500);
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x4;
    if (pvVar4 == (void *)0x0) goto LAB_004b5629;
    iVar2 = FUN_0049d020();
LAB_004b562b:
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_004b7cb0();
    FUN_00406b70();
    FUN_004b8450();
    FUN_004b84b0();
    break;
  case 4:
  case 5:
  case 6:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x5;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_0049d570();
    FUN_00413480();
    FUN_004b8450();
    FUN_004b84b0();
    goto LAB_004b60ab;
  case 7:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x6;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_0049d570();
    FUN_004b7cb0();
    piVar6[100] = 0x3c23d70a;
    break;
  case 8:
    goto LAB_004b60ab;
  case 9:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x7;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_00406b70();
    FUN_004b8450();
    goto LAB_004b5dc5;
  case 10:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x8;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    goto LAB_004b60ab;
  case 0xb:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x9;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049be20();
    }
    piVar6[0x56] = (int)piVar5;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar5 + 8))();
    goto LAB_004b60ab;
  case 0xc:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0xa;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    goto LAB_004b60ab;
  case 0xd:
    piVar6[0x5b] = 0x3ecccccd;
    goto LAB_004b60ab;
  case 0xe:
    fVar7 = (float10)FUN_00647b30();
    piVar6[100] = (int)(float)fVar7;
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0xb;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    pvStack_c = (void *)0xffffffff;
    piVar6[0x56] = iVar2;
    FUN_00647b30();
    FUN_00647b30();
    FUN_00647b30();
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_004b7cb0(0,(float)piVar6[100] * _DAT_006e9984,0x41a00000);
    FUN_004b84e0();
    *(byte *)((int)piVar6 + 0x7a) = *(byte *)((int)piVar6 + 0x7a) | 1;
    piVar6[0x59] = 0;
    piVar6[0x58] = (int)&param_4;
    (**(code **)(*piVar6 + 0x48))(s_FallingBoulder_0072c350);
    break;
  case 0xf:
    piVar6[0x5b] = 0x3ecccccd;
    FUN_004b7cb0();
    FUN_00649600();
    iVar3 = (int)*(short *)(&DAT_0076cd88 + ((unaff_retaddr ^ param_1) * -0xfb & 0xfff) * 2);
    for (iVar2 = iVar3; iVar2 != -1; iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe)) {
    }
    for (; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
      iVar2 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
      if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == unaff_retaddr)) &&
         (*(uint *)(iVar2 + 0xc) == param_1)) {
        if (iVar3 != -1) {
          uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
          pvStack_c = (void *)0xffffffff;
          piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
          FUN_00649720();
          goto LAB_004b5c32;
        }
        break;
      }
    }
    pvStack_c = (void *)0xffffffff;
    FUN_00649720();
    piVar5 = (int *)0x0;
LAB_004b5c32:
    (**(code **)(*piVar5 + 0x154))();
    (**(code **)(*piVar6 + 0x1c))();
    break;
  case 0x10:
    fVar7 = (float10)FUN_00647b30();
    piVar6[100] = (int)(float)fVar7;
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0xd;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_004b7cb0();
    FUN_004b84e0();
    break;
  case 0x11:
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0xe;
    if (pvVar4 == (void *)0x0) {
LAB_004b5d75:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    goto LAB_004b5d77;
  case 0x12:
    piVar6[0x66] = (int)((float)piVar6[0x66] + _DAT_006e9364);
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0xf;
    if (pvVar4 == (void *)0x0) goto LAB_004b5d75;
    iVar2 = FUN_0049d020();
LAB_004b5d77:
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
LAB_004b5dc5:
    FUN_004b7cb0();
    FUN_004b7ca0();
    break;
  case 0x16:
    FUN_004b7cb0();
    FUN_004357e0(&param_2);
    FUN_004b6230(iVar2,param_1);
    pvVar4 = operator_new(0x54);
    pvStack_c = (void *)0x10;
    if (pvVar4 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0049d020();
    }
    piVar6[0x56] = iVar2;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*(int *)piVar6[0x56] + 0xc))(&param_2);
    FUN_00488d30();
    break;
  case 0x17:
  case 0x18:
    piVar5 = (int *)FUN_0041bcc0();
    if (piVar5[0xf4] == 0) {
      iVar2 = FUN_0041bcc0();
      if (*(int *)(iVar2 + 0x3c0) != 0) {
        FUN_004272d0();
      }
    }
    else {
      FUN_00427320();
    }
    FUN_004b7cb0();
    iVar2 = *piVar6;
    (**(code **)(*piVar5 + 0x30))();
    (**(code **)(iVar2 + 0x1c))();
    break;
  case 0x19:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x11;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049be20();
    }
    piVar6[0x56] = (int)piVar5;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar5 + 8))();
    FUN_004b7cb0();
    FUN_00406b70();
    FUN_004b8450();
    break;
  case 0x1a:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x12;
    if (pvVar4 == (void *)0x0) {
LAB_004b6070:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049be20();
    }
    goto LAB_004b6072;
  case 0x1b:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x13;
    if (pvVar4 == (void *)0x0) goto LAB_004b6070;
    piVar5 = (int *)FUN_0049be20();
    goto LAB_004b6072;
  case 0x1c:
    pvVar4 = operator_new(0xd0);
    pvStack_c = (void *)0x14;
    if (pvVar4 == (void *)0x0) goto LAB_004b6070;
    piVar5 = (int *)FUN_0049be20();
LAB_004b6072:
    piVar6[0x56] = (int)piVar5;
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar5 + 8))();
LAB_004b60ab:
    FUN_004b7cb0();
  }
  FUN_004b7b20();
  FUN_004b81c0();
  ExceptionList = pvStack_14;
  return uStack_94;
}

