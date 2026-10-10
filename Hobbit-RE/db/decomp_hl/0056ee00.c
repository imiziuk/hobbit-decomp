
void __thiscall FUN_0056ee00(int param_1,float param_2)

{
  float fVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = DAT_006e92e8;
  if ((*(byte *)(param_1 + 0x484) & 2) == 0) {
    param_2 = param_2 / *(float *)(param_1 + 0x6b0);
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      param_2 = DAT_006e92e8;
    }
    param_2 = param_2 + *(float *)(param_1 + 0x6c0);
    *(float *)(param_1 + 0x6c0) = param_2;
    if (fVar1 < param_2) {
      if (*(int *)(param_1 + 0x710) == 0) {
        *(undefined4 *)(param_1 + 0x6c0) = 0x3f800000;
      }
      else {
        *(float *)(param_1 + 0x6c0) = param_2 - DAT_006e92e8;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c0) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x6c0);
  local_18 = (*(float *)(param_1 + 0x6d0) - *(float *)(param_1 + 0x6c4)) * fVar1 +
             *(float *)(param_1 + 0x6c4);
  local_14 = (*(float *)(param_1 + 0x6d4) - *(float *)(param_1 + 0x6c8)) * fVar1 +
             *(float *)(param_1 + 0x6c8);
  local_10 = (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6cc)) * fVar1 +
             *(float *)(param_1 + 0x6cc);
  local_c = (*(float *)(param_1 + 0x700) - *(float *)(param_1 + 0x6f4)) * fVar1;
  local_24 = local_c + *(float *)(param_1 + 0x6f4);
  local_20 = (*(float *)(param_1 + 0x704) - *(float *)(param_1 + 0x6f8)) * fVar1 +
             *(float *)(param_1 + 0x6f8);
  local_1c = (*(float *)(param_1 + 0x708) - *(float *)(param_1 + 0x6fc)) * fVar1 +
             *(float *)(param_1 + 0x6fc);
  *(float *)(param_1 + 0x6ec) =
       (*(float *)(param_1 + 0x6f0) - *(float *)(param_1 + 0x6e8)) * *(float *)(param_1 + 0x6c0) +
       *(float *)(param_1 + 0x6e8);
  FUN_0056eb10(param_1 + 0x49c,param_1 + 0x4a8,&local_18,param_1 + 0x6dc,&local_24,param_1 + 0x688,
               *(undefined4 *)(param_1 + 0x70c));
  return;
}

