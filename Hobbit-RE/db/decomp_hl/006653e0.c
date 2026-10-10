
undefined4 * __fastcall FUN_006653e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6664;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x14) = local_11;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = 0;
  FUN_006c043b(param_1 + 0x19,0x480,8,FUN_00671410,FUN_00671570);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0064cbe0();
  param_1[0x97a] = 0;
  param_1[0x979] = 0;
  param_1[0x97b] = 0;
  param_1[0x97d] = 0;
  param_1[0x97c] = 0;
  param_1[0x977] = 0;
  param_1[0x978] = 0;
  param_1[0x981] = 0;
  param_1[0x980] = 0;
  param_1[0x982] = 0;
  param_1[0x984] = 0;
  param_1[0x983] = 0;
  param_1[0x97e] = 0;
  param_1[0x97f] = 0;
  iVar3 = 10;
  puVar2 = param_1 + 0x99c;
  do {
    puVar2[8] = 0;
    puVar2[9] = 0xbf800000;
    iVar3 = iVar3 + -1;
    puVar4 = puVar2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar2 + 10;
  } while (iVar3 != 0);
  param_1[0xa01] = 0;
  param_1[0xa02] = 0;
  param_1[0xa03] = 0;
  param_1[0xa05] = 0;
  param_1[0xa04] = 0x15;
  puVar2 = param_1;
  for (iVar3 = 0xa0e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

