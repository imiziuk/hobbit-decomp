
void FUN_0055a9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  DAT_00771f74 = 1;
  local_4 = 0;
  if (0 < DAT_00771f60) {
    do {
      iVar2 = DAT_00771f64 + iVar4;
      if ((*(byte *)(iVar2 + 0x43) & 8) == 0) {
        iVar2 = FUN_0055ab00(param_1,iVar2);
joined_r0x0055aa6d:
        if (iVar2 == 0) goto LAB_0055aa22;
        if ((*(byte *)(iVar4 + 0x42 + DAT_00771f64) & 1) == 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      else {
        iVar2 = FUN_0055ab00(param_2,iVar2);
        if (iVar2 == 0) {
          iVar2 = FUN_0055ab00(param_4,iVar4 + DAT_00771f64);
          goto joined_r0x0055aa6d;
        }
LAB_0055aa22:
        if ((*(byte *)(iVar4 + 0x42 + DAT_00771f64) & 1) != 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 4;
        }
      }
      iVar2 = DAT_00771f64 + iVar4;
      if ((*(byte *)(iVar2 + 0x43) & 4) == 0) {
        iVar2 = FUN_0055ab00(param_3,iVar2);
        if ((iVar2 != 0) || (iVar2 = FUN_0055ab00(param_1,iVar4 + DAT_00771f64), iVar2 != 0)) {
          bVar3 = *(byte *)(iVar4 + 0x42 + DAT_00771f64);
          goto LAB_0055aac5;
        }
        if ((*(byte *)(iVar4 + 0x42 + DAT_00771f64) & 8) != 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 0x80;
        }
      }
      else {
        iVar2 = FUN_0055ab00(param_4,iVar2);
        bVar3 = *(byte *)(iVar4 + 0x42 + DAT_00771f64);
        if (iVar2 == 0) {
LAB_0055aac5:
          if ((bVar3 & 8) == 0) {
            pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
            *pbVar1 = *pbVar1 | 0x40;
          }
        }
        else if ((bVar3 & 8) != 0) {
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 0x80;
        }
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x44;
    } while (local_4 < DAT_00771f60);
  }
  return;
}

