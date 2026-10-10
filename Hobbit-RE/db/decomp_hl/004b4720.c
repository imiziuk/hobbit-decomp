
void FUN_004b4720(undefined4 param_1)

{
  int iVar1;
  
  FUN_004d1180(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 7;
    FUN_00647d10(iVar1,s_Resource_Name_0072be30);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x100) = 1;
    *(undefined4 *)(iVar1 + 0x104) = 0;
  }
  return;
}

