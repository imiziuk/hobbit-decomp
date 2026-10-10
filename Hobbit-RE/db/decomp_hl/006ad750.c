
void __thiscall FUN_006ad750(int *param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = FUN_0064f210(param_2,&DAT_007564bc);
  if (iVar2 != 0) {
    if (param_3 == 0) {
      local_10 = 0;
      if (0 < param_1[3]) {
        do {
          FUN_0064f4f0();
          iVar3 = param_1[1];
          local_14 = 0;
          if (0 < iVar3) {
            local_c = 0;
            do {
              pfVar1 = (float *)(param_1[2] + (iVar3 * local_10 + local_14) * 0x28);
              FUN_0064f4f0(iVar2,s__3d__32s_00756530,local_14,local_c + 0xc + *param_1);
              FUN_0064f4f0(iVar2,s____8_5f__8_5f__8_5f__8_5f_0075653c,(double)pfVar1[3],
                           (double)pfVar1[4],(double)pfVar1[5],(double)pfVar1[6]);
              FUN_0064f4f0(iVar2,s____8_2f__8_2f__8_2f_0075655c,(double)pfVar1[7],(double)pfVar1[8],
                           (double)pfVar1[9]);
              FUN_0064f4f0(iVar2,s____4_2f__4_2f__4_2f_00756578,(double)*pfVar1);
              iVar3 = param_1[1];
              local_c = local_c + 0x1c4;
              local_14 = local_14 + 1;
            } while (local_14 < iVar3);
          }
          local_10 = local_10 + 1;
        } while (local_10 < param_1[3]);
      }
    }
    else {
      local_14 = 0;
      if (0 < param_1[1]) {
        iVar3 = param_1[3];
        local_c = 0;
        do {
          local_10 = 0;
          if (0 < iVar3) {
            do {
              pfVar1 = (float *)(param_1[2] + (param_1[1] * local_10 + local_14) * 0x28);
              FUN_0064f4f0(iVar2,s__3d__32s_007564c0,local_14,local_c + 0xc + *param_1);
              FUN_0064f4f0(iVar2,s____8_5f__8_5f__8_5f__8_5f_007564cc,(double)pfVar1[3],
                           (double)pfVar1[4],(double)pfVar1[5],(double)pfVar1[6]);
              FUN_0064f4f0(iVar2,s____8_2f__8_2f__8_2f_007564ec,(double)pfVar1[7],(double)pfVar1[8],
                           (double)pfVar1[9]);
              FUN_0064f4f0(iVar2,s____4_2f__4_2f__4_2f_00756508,(double)*pfVar1);
              iVar3 = param_1[3];
              local_10 = local_10 + 1;
            } while (local_10 < iVar3);
          }
          local_14 = local_14 + 1;
          local_c = local_c + 0x1c4;
        } while (local_14 < param_1[1]);
        FUN_0064f2b0();
        return;
      }
    }
    FUN_0064f2b0();
  }
  return;
}

