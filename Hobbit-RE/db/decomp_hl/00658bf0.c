
undefined4 FUN_00658bf0(undefined4 param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar5 = (uint)*param_2;
  iVar1 = FUN_00647b10(0,0x7fff);
  iVar3 = 0;
  puVar4 = param_2 + 1;
  if (uVar5 != 0) {
    do {
      if ((ushort)(iVar1 << 1) <= *puVar4) break;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < (int)uVar5);
  }
  puVar4 = param_2 + 1 + uVar5;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar5 = 0;
    if ((*puVar4 & 0x2000) != 0) {
      uVar5 = (uint)(puVar4[2] >> 1);
    }
    puVar4 = puVar4 + uVar5 + 2;
  }
  uVar5 = *puVar4 & 0x1fff;
  switch(*puVar4 >> 0xe) {
  case 0:
    uVar2 = FUN_006584d0(uVar5,param_1,puVar4,param_3,param_4);
    return uVar2;
  case 1:
    uVar2 = FUN_00658660(uVar5,param_1,puVar4,param_3,param_4);
    return uVar2;
  case 2:
    uVar2 = FUN_00658670(uVar5,param_1,puVar4,param_3,param_4);
    return uVar2;
  case 3:
    uVar2 = FUN_00658d20(param_1,*(undefined4 *)(*(int *)(param_4 + 0x1a8) + uVar5 * 4),param_3,
                         param_4);
    return uVar2;
  default:
    return 0;
  }
}

