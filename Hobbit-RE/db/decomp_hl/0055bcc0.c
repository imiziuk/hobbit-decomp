
void FUN_0055bcc0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_00771f60) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)(iVar2 + 0x42 + DAT_00771f64);
      *pbVar1 = *pbVar1 | 0x40;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < DAT_00771f60);
  }
  DAT_00771f74 = 1;
  FUN_0055b420();
  return;
}

