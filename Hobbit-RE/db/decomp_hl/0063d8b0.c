
void __thiscall thunk_FUN_0063daf0(int *param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_c;
  int iStack_8;
  
  if (param_3 != 0) {
    uVar4 = param_1[6] & 7;
    pbVar1 = (byte *)((param_1[6] >> 3) + *param_1);
    iStack_8 = param_3;
    uStack_c = 0;
    uVar5 = 0;
    do {
      iVar2 = 8 - uVar4;
      if (iStack_8 < (int)(8 - uVar4)) {
        iVar2 = iStack_8;
      }
      uVar3 = uVar5 + iVar2;
      uStack_c = uStack_c |
                 ((uint)(*pbVar1 >> (('\b' - (char)uVar4) - (byte)iVar2 & 0x1f)) &
                 ~(-1 << ((byte)iVar2 & 0x1f))) << ((byte)uVar5 & 0x1f);
      pbVar1 = pbVar1 + 1;
      uVar4 = 0;
      if (7 < (int)uVar3) {
        uVar5 = uVar3 >> 3;
        uVar3 = uVar3 + uVar5 * -8;
        do {
          *param_2 = (char)uStack_c;
          param_2 = param_2 + 1;
          uStack_c = uStack_c >> 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      iStack_8 = iStack_8 - iVar2;
      uVar5 = uVar3;
    } while (iStack_8 != 0);
    if (uVar3 != 0) {
      *param_2 = (undefined1)uStack_c;
    }
    param_1[6] = param_1[6] + param_3;
  }
  return;
}

