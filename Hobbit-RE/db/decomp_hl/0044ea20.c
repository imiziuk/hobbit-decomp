
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044ea20(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_24;
  int local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x5e94) != 0) {
    if (*(int *)(param_1 + 0x5e98) == 0) {
      FUN_00659600(s_Bilbo_00_41_00724b48,1);
      *(undefined4 *)(param_1 + 0x5e98) = 1;
    }
    pfVar3 = (float *)(param_1 + 0x59c4);
    local_20 = 0x10;
    do {
      if (DAT_006e92e4 < *pfVar3) {
        fVar2 = *pfVar3 - param_2;
        *pfVar3 = fVar2;
        pfVar3[3] = pfVar3[3] - param_2;
        if (fVar2 < DAT_006e92e4 == (fVar2 == DAT_006e92e4)) {
          fVar2 = pfVar3[-0xd];
          if (*(int *)(param_1 + 0x590) != 0) {
            FUN_005423d0();
          }
          local_18 = *(undefined4 *)(*(int *)(param_1 + 0x594) + (int)fVar2 * 0xc);
          iVar1 = *(int *)(param_1 + 0x594) + (int)fVar2 * 0xc;
          local_14 = *(undefined4 *)(iVar1 + 4);
          local_10 = *(undefined4 *)(iVar1 + 8);
          FUN_005a31a0(0,&local_18,1);
          FUN_005a2ba0(pfVar3 + 4);
          FUN_005a2bc0(param_2,5);
          if (pfVar3[3] < DAT_006e92e4 != (pfVar3[3] == DAT_006e92e4)) {
            fVar4 = (float10)FUN_00647b30(0x40000000,0x40600000);
            pfVar3[3] = (float)fVar4;
            fVar4 = (float10)FUN_00647b30(0,0x3f800000);
            local_24 = 1;
            if (fVar4 <= (float10)_DAT_006e936c) {
              local_24 = -1;
            }
            fVar5 = (float10)FUN_00647b30(DAT_00724b34,_DAT_00724b38);
            fVar4 = (float10)local_24;
            fVar6 = (float10)FUN_00647b30(0,0x3f800000);
            local_24 = 1;
            if (fVar6 <= (float10)_DAT_006e936c) {
              local_24 = -1;
            }
            fVar6 = (float10)FUN_00647b30(DAT_00724b34,_DAT_00724b38);
            local_8 = pfVar3[5];
            local_4 = (float)(fVar6 * (float10)local_24);
            local_c = (float)(fVar5 * fVar4);
            FUN_00589460(pfVar3 + 4,&local_c,0x40400000,1,*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
          }
        }
        else {
          *pfVar3 = 0.0;
        }
      }
      pfVar3 = pfVar3 + 0x14;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

