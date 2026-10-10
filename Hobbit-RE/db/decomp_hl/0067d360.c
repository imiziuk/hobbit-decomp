
void FUN_0067d360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  uVar3 = param_1;
  if (((DAT_00808edc == 0) && (DAT_00808ed0 == 0)) && (DAT_00808ed8 != 0)) {
    iVar4 = FUN_00647cf0(param_1);
    puVar2 = DAT_007f23d8;
    piVar1 = DAT_007f23d8 + 2;
    DAT_007f23d8 = (undefined4 *)((int)DAT_007f23d8 + (iVar4 + 0x24U & 0xfffffff0));
    *piVar1 = iVar4;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar5 = (undefined1 *)FUN_0067d8a0(&param_1);
    *(undefined1 *)((int)puVar2 + 0xf) = puVar5[3];
    *(undefined1 *)((int)puVar2 + 0xe) = puVar5[2];
    *(undefined1 *)((int)puVar2 + 0xd) = puVar5[1];
    *(undefined1 *)(puVar2 + 3) = *puVar5;
    puVar2[4] = DAT_00808ecc;
    DAT_00808ecc = puVar2;
    FUN_00647d10(puVar2 + 5,uVar3);
  }
  return;
}

