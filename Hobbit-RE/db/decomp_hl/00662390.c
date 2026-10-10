
int * FUN_00662390(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_ESI;
  int *piVar5;
  int *piVar6;
  undefined1 *puStack_4c;
  int *piStack_48;
  uint *puStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  int *local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  uint auStack_20 [5];
  undefined1 auStack_c [12];
  
  piVar1 = param_1;
  ppiStack_3c = (int **)0x66239a;
  iVar2 = FUN_0065bb00();
  if (iVar2 != 3) {
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
    ppiStack_3c = &local_30;
    param_1 = (int *)0x0;
    local_30 = piVar1;
    ppiStack_40 = (int **)0x6623ce;
    local_28 = FUN_006699c0();
    if ((local_28 == DAT_007f049c) || (local_30 < *(int **)(local_28 + 0xc))) {
      local_24 = DAT_007f049c;
      piVar6 = &local_24;
    }
    else {
      piVar6 = &local_28;
    }
    if (*piVar6 != DAT_007f049c) {
      return *(int **)(*piVar6 + 0x10);
    }
    ppiStack_3c = (int **)0x0;
    ppiStack_40 = (int **)DAT_007f1000;
    puStack_44 = (uint *)0x66240f;
    (**(code **)(*DAT_007f1000 + 0x14))();
    puStack_44 = auStack_20;
    piStack_48 = piVar1;
    puStack_4c = (undefined1 *)0x66241a;
    (**(code **)(*piVar1 + 0x34))();
    uVar3 = auStack_20[0];
    puStack_4c = auStack_c;
    uVar4 = auStack_20[0] | 8;
    iVar2 = (**(code **)(*DAT_007f1000 + 0x5c))();
    if (iVar2 != 0) {
      return (int *)0x0;
    }
    piVar6 = (int *)0x0;
    piVar5 = piVar1;
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&puStack_4c,0);
    (**(code **)(*unaff_ESI + 0x2c))(unaff_ESI,0,0,&stack0xffffff9c,0);
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar5 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar5 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
    (**(code **)(*piVar1 + 0x30))(piVar1);
    (**(code **)(iRam00000000 + 0x30))(0);
    ppiStack_40 = &local_30;
    puStack_44 = auStack_20;
    local_30 = piVar1;
    uStack_2c = 0;
    piStack_48 = (int *)0x6624bb;
    FUN_00668e20();
    *(undefined4 *)(auStack_20[0] + 0x10) = 0;
  }
  return param_1;
}

