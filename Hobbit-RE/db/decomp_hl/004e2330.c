
undefined4 __thiscall FUN_004e2330(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_cc [19];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if ((((*param_2 < *(float *)(param_1 + 0x50) != (*param_2 == *(float *)(param_1 + 0x50))) &&
       (param_2[1] < *(float *)(param_1 + 0x54) != (param_2[1] == *(float *)(param_1 + 0x54)))) &&
      (param_2[2] < *(float *)(param_1 + 0x58) != (param_2[2] == *(float *)(param_1 + 0x58)))) &&
     (((*(float *)(param_1 + 0x44) <= *param_2 && (*(float *)(param_1 + 0x48) <= param_2[1])) &&
      (*(float *)(param_1 + 0x4c) <= param_2[2])))) {
    if ((((NAN(*(float *)(param_1 + 0x68)) || NAN(DAT_006e92e4)) ==
          (*(float *)(param_1 + 0x68) == DAT_006e92e4)) ||
        ((NAN(*(float *)(param_1 + 0x6c)) || NAN(DAT_006e92e4)) ==
         (*(float *)(param_1 + 0x6c) == DAT_006e92e4))) ||
       ((NAN(*(float *)(param_1 + 0x70)) || NAN(DAT_006e92e4)) ==
        (*(float *)(param_1 + 0x70) == DAT_006e92e4))) {
      local_cc[0xc] = 0.0;
      local_cc[8] = 0.0;
      local_cc[4] = 0.0;
      local_cc[0xd] = 0.0;
      local_cc[9] = 0.0;
      local_cc[1] = 0.0;
      local_cc[0xe] = 0.0;
      local_cc[6] = 0.0;
      local_cc[2] = 0.0;
      local_cc[0xb] = 0.0;
      local_cc[7] = 0.0;
      local_cc[3] = 0.0;
      local_cc[0] = 1.0;
      local_cc[5] = 1.0;
      local_cc[10] = 1.0;
      local_cc[0xf] = 1.0;
      FUN_00463c20(param_1 + 0x68);
      pfVar2 = (float *)FUN_0064e040(local_40,local_80,local_cc);
      if ((local_cc != pfVar2) && (pfVar1 = pfVar2 + 0x10, pfVar2 != pfVar1)) {
        pfVar3 = local_cc + 2;
        iVar4 = (int)pfVar2 - (int)local_cc;
        do {
          pfVar3[-2] = *pfVar2;
          pfVar3[-1] = pfVar2[1];
          *pfVar3 = *(float *)(iVar4 + (int)pfVar3);
          pfVar3[1] = pfVar2[3];
          pfVar2 = pfVar2 + 4;
          pfVar3 = pfVar3 + 4;
        } while (pfVar2 != pfVar1);
      }
      FUN_00420470(param_1 + 0x14);
      FUN_0064d6d0();
      local_cc[0xc] =
           local_cc[4] * param_2[1] + local_cc[0] * *param_2 + local_cc[8] * param_2[2] +
           local_cc[0xc];
      local_cc[0xd] =
           local_cc[5] * param_2[1] + local_cc[1] * *param_2 + local_cc[9] * param_2[2] +
           local_cc[0xd];
      local_cc[0xe] =
           local_cc[6] * param_2[1] + local_cc[2] * *param_2 + local_cc[10] * param_2[2] +
           local_cc[0xe];
      if ((((local_cc[0xc] < -*(float *)(param_1 + 0xac) ==
             (NAN(local_cc[0xc]) || NAN(-*(float *)(param_1 + 0xac)))) &&
           (local_cc[0xc] <= *(float *)(param_1 + 0xac))) &&
          (-*(float *)(param_1 + 0xb0) <= local_cc[0xd])) &&
         (((local_cc[0xd] <= *(float *)(param_1 + 0xb0) &&
           (-*(float *)(param_1 + 0xb4) <= local_cc[0xe])) &&
          (local_cc[0xe] <= *(float *)(param_1 + 0xb4))))) {
        return 1;
      }
    }
    else if (((*param_2 < *(float *)(param_1 + 0x50) != (*param_2 == *(float *)(param_1 + 0x50))) &&
             (param_2[1] < *(float *)(param_1 + 0x54) != (param_2[1] == *(float *)(param_1 + 0x54)))
             ) && ((param_2[2] < *(float *)(param_1 + 0x58) !=
                    (param_2[2] == *(float *)(param_1 + 0x58)) &&
                   (((*(float *)(param_1 + 0x44) <= *param_2 &&
                     (*(float *)(param_1 + 0x48) <= param_2[1])) &&
                    (*(float *)(param_1 + 0x4c) <= param_2[2])))))) {
      return 1;
    }
  }
  return 0;
}

