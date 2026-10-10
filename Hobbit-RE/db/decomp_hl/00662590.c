
int FUN_00662590(int ***param_1,undefined4 param_2)

{
  int ***pppiVar1;
  int iVar2;
  int ***pppiVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int **ppiStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  int ***pppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  int ***pppiStack_3c;
  undefined4 *puStack_38;
  int **local_2c;
  int **local_28;
  int iStack_24;
  int **local_20;
  uint auStack_1c [2];
  undefined4 uStack_14;
  
  DAT_007f0080 = DAT_007f0080 + 1;
  puStack_38 = (undefined4 *)0x6625a7;
  iVar2 = FUN_0065bb00();
  pppiVar1 = param_1;
  if (iVar2 == 3) {
    puStack_38 = (undefined4 *)param_2;
    pppiStack_3c = param_1;
    ppiStack_40 = (int **)DAT_007f1000;
    ppiStack_44 = (int **)0x6625c4;
    iVar2 = (*(code *)(*DAT_007f1000)[0x55])();
    return iVar2;
  }
  puStack_38 = &param_1;
  local_2c = (int **)0x0;
  pppiStack_3c = (int ***)0x6625e9;
  local_28 = (int **)FUN_006699c0();
  if (((int ***)local_28 == DAT_007f049c) || (param_1 < ((int ***)local_28)[3])) {
    local_20 = (int **)DAT_007f049c;
    pppiVar3 = &local_20;
  }
  else {
    pppiVar3 = &local_28;
  }
  if ((int ***)*pppiVar3 == DAT_007f049c) {
    puStack_38 = (undefined4 *)0x0;
    pppiStack_3c = DAT_007f1000;
    ppiStack_40 = (int **)0x66262d;
    (*(code *)(*DAT_007f1000)[5])();
    ppiStack_40 = (int **)auStack_1c;
    ppiStack_44 = (int **)pppiVar1;
    pppiStack_48 = (int ***)0x662638;
    (*(code *)(*pppiVar1)[0xd])();
    pppiStack_48 = (int ***)&pppiStack_3c;
    puStack_4c = (undefined4 *)0x0;
    iStack_50 = iStack_24;
    uStack_54 = auStack_1c[0] | 8;
    uStack_58 = uStack_14;
    ppiStack_5c = (int **)DAT_007f1000;
    iVar2 = (*(code *)(*DAT_007f1000)[0x18])();
    if (iVar2 != 0) {
      return iVar2;
    }
    piVar8 = &iStack_24;
    puVar7 = (undefined4 *)0x0;
    (*(code *)(*pppiVar1)[0xb])(pppiVar1,0,0,piVar8,0);
    piVar6 = (int *)0x0;
    (**(code **)(*piVar8 + 0x2c))(piVar8,0,0,&ppiStack_5c,0);
    puVar5 = puStack_4c;
    for (uVar4 = uStack_54 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uStack_54 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    (*(code *)(*pppiVar1)[0xc])(pppiVar1);
    (**(code **)(*piVar6 + 0x30))(piVar6);
    pppiStack_3c = &local_28;
    ppiStack_40 = (int **)auStack_1c;
    local_28 = (int **)pppiVar1;
    iStack_24 = 0;
    ppiStack_44 = (int **)0x6626d5;
    FUN_00668e20();
    *(undefined4 *)(auStack_1c[0] + 0x10) = 0;
  }
  else {
    local_2c = (int **)(*pppiVar3)[4];
  }
  puStack_38 = (undefined4 *)param_2;
  pppiStack_3c = (int ***)local_2c;
  ppiStack_40 = (int **)DAT_007f1000;
  ppiStack_44 = (int **)0x6626f9;
  (*(code *)(*DAT_007f1000)[0x55])();
  return 0;
}

