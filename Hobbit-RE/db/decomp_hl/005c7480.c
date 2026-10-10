
void FUN_005c7480(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x10;
  do {
    bVar2 = (byte)iVar3;
    iVar3 = iVar3 + -4;
    *(undefined *)(iVar1 + param_2) =
         PTR_s_bcdfghjklmnprstw_007461e8[param_1 >> (bVar2 & 0x1f) & 0xf];
    iVar1 = iVar1 + 1;
  } while (-4 < iVar3);
  *(undefined1 *)(iVar1 + param_2) = 0;
  return;
}

