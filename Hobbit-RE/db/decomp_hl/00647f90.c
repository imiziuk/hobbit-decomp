
byte * FUN_00647f90(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    return param_1;
  }
  bVar1 = *param_1;
  if (bVar1 != 0) {
    iVar3 = (int)param_1 - (int)param_2;
    pbVar2 = param_2;
joined_r0x00647fbc:
    do {
      if (bVar1 != 0) {
        if (*pbVar2 == 0) {
          return param_1;
        }
        if ((&DAT_0074c390)[pbVar2[iVar3]] == (&DAT_0074c390)[*pbVar2]) {
          bVar1 = pbVar2[iVar3 + 1];
          pbVar2 = pbVar2 + 1;
          goto joined_r0x00647fbc;
        }
      }
      if (*pbVar2 == 0) {
        return param_1;
      }
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 1;
      pbVar2 = param_2;
    } while (bVar1 != 0);
  }
  return (byte *)0x0;
}

