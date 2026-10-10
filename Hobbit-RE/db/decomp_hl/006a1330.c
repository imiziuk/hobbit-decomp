
void FUN_006a1330(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = __ftol();
    param_1 = CONCAT13(uVar3,0xff0000);
    param_1 = CONCAT22(param_1._2_2_,0xff00);
    param_1 = CONCAT31(param_1._1_3_,0xff);
    FUN_0069f570(*(undefined4 *)(iVar2 + 0x10),iVar2,0,&param_1,1);
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  param_1 = 0xa0ffffff;
  FUN_0069f570(*puVar1,iVar2,0,&param_1,1);
  return;
}

