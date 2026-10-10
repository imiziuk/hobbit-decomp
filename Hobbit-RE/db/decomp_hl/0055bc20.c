
void FUN_0055bc20(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_4;
  
  if (0 < DAT_00771f60) {
    iVar4 = 0;
    local_4 = DAT_00771f60;
    do {
      uVar2 = FUN_0063d990();
      if (uVar2 != (*(byte *)(iVar4 + 0x42 + DAT_00771f64) & 1)) {
        if (uVar2 == 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 2;
        }
        DAT_00771f74 = 1;
      }
      uVar3 = FUN_0063d990();
      if (uVar2 != 0) {
        uVar3 = 1;
      }
      if (uVar3 != (*(byte *)(iVar4 + 0x42 + DAT_00771f64) & 8) >> 3) {
        if (uVar3 == 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 0x80;
        }
        else {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 0x40;
        }
        DAT_00771f74 = 1;
      }
      iVar4 = iVar4 + 0x44;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

