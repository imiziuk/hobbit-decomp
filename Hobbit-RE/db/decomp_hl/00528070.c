
undefined4 __fastcall FUN_00528070(int param_1)

{
  int iVar1;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x558)) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = 0x3dcccccd;
  if ((iVar1 < 0x127) || (0x130 < iVar1)) {
    if ((iVar1 < 0x131) || (0x13a < iVar1)) {
      if ((iVar1 < 0x13b) || (0x144 < iVar1)) {
        if ((iVar1 < 0x145) || (0x14e < iVar1)) {
          if ((iVar1 < 0x14f) || (0x15a < iVar1)) {
            if ((0x15a < iVar1) &&
               ((iVar1 < 0x169 &&
                (iVar1 = *(int *)(&DAT_00735c34 + *(int *)(param_1 + 0x55c) * 0x18), iVar1 != 0))))
            {
              if (iVar1 == 0x23) {
                return 8;
              }
              if (iVar1 == 0x22) {
                return *(undefined4 *)(param_1 + 0x14);
              }
            }
          }
          else {
            iVar1 = *(int *)(&DAT_00735c30 + *(int *)(param_1 + 0x55c) * 0x18);
            if (iVar1 != 0) {
              if (iVar1 == 0x21) {
                return 8;
              }
              if (iVar1 == 0x20) {
                return *(undefined4 *)(param_1 + 0x14);
              }
            }
          }
        }
        else {
          iVar1 = *(int *)(&DAT_00735c2c + *(int *)(param_1 + 0x55c) * 0x18);
          if (iVar1 != 0) {
            if (iVar1 == 0x1f) {
              return 8;
            }
            if (iVar1 == 0x1e) {
              return *(undefined4 *)(param_1 + 0x14);
            }
          }
        }
      }
      else {
        iVar1 = *(int *)(&DAT_00735c28 + *(int *)(param_1 + 0x55c) * 0x18);
        if (iVar1 != 0) {
          if (iVar1 == 0x1d) {
            return 8;
          }
          if (iVar1 == 0x1c) {
            return *(undefined4 *)(param_1 + 0x14);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(&DAT_00735c24 + *(int *)(param_1 + 0x55c) * 0x18);
      if (iVar1 != 0) {
        if (iVar1 == 0x1b) {
          return 8;
        }
        if (iVar1 == 0x1a) {
          return *(undefined4 *)(param_1 + 0x14);
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(&DAT_00735c20 + *(int *)(param_1 + 0x55c) * 0x18);
    if (iVar1 != 0) {
      if (iVar1 == 0x19) {
        return 8;
      }
      if (iVar1 == 0x18) {
        return *(undefined4 *)(param_1 + 0x14);
      }
    }
  }
  return 0;
}

