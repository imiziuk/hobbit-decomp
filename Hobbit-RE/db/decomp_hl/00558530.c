
int FUN_00558530(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(param_2 + 4);
  if ((((iVar2 == 0) &&
       (iVar2 = (uint)*(byte *)(param_1 + 0x18) - (uint)*(byte *)(param_2 + 6), iVar2 == 0)) &&
      (iVar2 = (uint)*(ushort *)(param_1 + 0x14) - (uint)*(ushort *)(param_2 + 5), iVar2 == 0)) &&
     ((iVar2 = (uint)*(byte *)(param_1 + 0x19) - (uint)*(byte *)((int)param_2 + 0x19), iVar2 == 0 &&
      (iVar2 = (uint)*(byte *)(param_1 + 0x1a) - (uint)*(byte *)((int)param_2 + 0x1a), iVar2 == 0)))
     ) {
    iVar2 = 0;
    param_1 = param_1 - (int)param_2;
    do {
      fVar1 = *(float *)(param_1 + (int)param_2) - *param_2;
      if ((NAN(fVar1) || NAN(DAT_006e92e4)) == (fVar1 == DAT_006e92e4)) {
        if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
          return -1;
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
  }
  return iVar2;
}

