
int FUN_00658670(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8 [2];
  
  if ((((param_1 < *(uint *)(param_5 + 0x11c)) && (iVar2 = *(int *)(param_5 + 0x1c4), iVar2 != 0))
      && (iVar2 = (uint)*(ushort *)(iVar2 + 2 + param_1 * 2) -
                  (uint)*(ushort *)(iVar2 + param_1 * 2), 0 < iVar2)) && (iVar2 < 3)) {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_00678360();
        local_8[iVar3] = iVar1;
        if (iVar1 == 0) {
          iVar2 = 0;
          if (iVar3 < 1) {
            return 0;
          }
          do {
            if (local_8[iVar2] != 0) {
              FUN_00678390(local_8[iVar2],0);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar2 == 1) {
      *(undefined4 *)(local_8[0] + 0xc) = 0;
    }
    else if (iVar2 == 2) {
      *(int *)(local_8[0] + 0xc) = local_8[1];
      *(int *)(local_8[1] + 0xc) = local_8[0];
    }
    puVar4 = (undefined4 *)
             ((uint)*(ushort *)(*(int *)(param_5 + 0x1c4) + param_1 * 2) * *(int *)(param_5 + 0x134)
             + *(int *)(param_5 + 0x1b8));
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = local_8[iVar3];
        FUN_00679730(iVar1,param_4);
        FUN_0065aee0(iVar1 + 0x14,param_3,param_4);
        if (iVar2 == 1) {
          if ((*(byte *)(iVar1 + 0x14) & 8) == 0) {
            *(undefined4 *)(iVar1 + 0x84) = 1;
          }
          else {
            *(undefined4 *)(iVar1 + 0x84) = 0;
          }
        }
        else if (iVar2 == 2) {
          *(undefined4 *)(iVar1 + 0x84) = 0;
          if (iVar3 == 0) {
            *(undefined4 *)(iVar1 + 0x3c) = 0xbf800000;
          }
          else {
            *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
          }
        }
        *(undefined4 *)(iVar1 + 0x90) = param_2;
        *(undefined4 *)(iVar1 + 0x94) = 3;
        *(undefined4 *)(iVar1 + 0x88) = 2;
        *(undefined4 **)(iVar1 + 0x8c) = puVar4;
        *puVar4 = 0;
        FUN_00679870(iVar1);
        iVar3 = iVar3 + 1;
        puVar4 = (undefined4 *)((int)puVar4 + *(int *)(param_5 + 0x134));
      } while (iVar3 < iVar2);
    }
    return iVar2;
  }
  return 0;
}

