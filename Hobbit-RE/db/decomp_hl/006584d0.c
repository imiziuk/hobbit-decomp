
int FUN_006584d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8 [2];
  
  if ((((param_1 < *(uint *)(param_5 + 0x114)) && (iVar3 = *(int *)(param_5 + 0x1bc), iVar3 != 0))
      && (iVar3 = (uint)*(ushort *)(iVar3 + 2 + param_1 * 2) -
                  (uint)*(ushort *)(iVar3 + param_1 * 2), 0 < iVar3)) && (iVar3 < 3)) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = FUN_00678360();
        local_8[iVar4] = iVar2;
        if (iVar2 == 0) {
          iVar3 = 0;
          if (iVar4 < 1) {
            return 0;
          }
          do {
            if (local_8[iVar3] != 0) {
              FUN_00678390(local_8[iVar3],0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (iVar3 == 1) {
      *(undefined4 *)(local_8[0] + 0xc) = 0;
    }
    else if (iVar3 == 2) {
      *(int *)(local_8[0] + 0xc) = local_8[1];
      *(int *)(local_8[1] + 0xc) = local_8[0];
    }
    iVar2 = (uint)*(ushort *)(*(int *)(param_5 + 0x1bc) + param_1 * 2) * *(int *)(param_5 + 300) +
            *(int *)(param_5 + 0x1b0);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = local_8[iVar4];
        FUN_00679730(iVar1,param_4);
        FUN_0065aee0(iVar1 + 0x14,param_3,param_4);
        if (iVar3 == 1) {
          if ((*(byte *)(iVar1 + 0x14) & 8) == 0) {
            *(undefined4 *)(iVar1 + 0x84) = 1;
          }
          else {
            *(undefined4 *)(iVar1 + 0x84) = 0;
          }
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(iVar1 + 0x84) = 0;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar1 + 0x3c) = 0xbf800000;
          }
          else {
            *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
          }
        }
        *(undefined4 *)(iVar1 + 0x90) = param_2;
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        *(int *)(iVar1 + 0x8c) = iVar2;
        FUN_00679870(iVar1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + *(int *)(param_5 + 300);
      } while (iVar4 < iVar3);
    }
    return iVar3;
  }
  return 0;
}

