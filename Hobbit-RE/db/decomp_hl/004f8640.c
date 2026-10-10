
void __thiscall FUN_004f8640(int param_1,float param_2,float param_3,undefined4 param_4)

{
  *(float *)(param_1 + 0x82c) = param_2;
  if (param_2 < *(float *)(param_1 + 0x828) == (NAN(param_2) || NAN(*(float *)(param_1 + 0x828)))) {
    if (param_2 <= *(float *)(param_1 + 0x828)) {
      *(undefined4 *)(param_1 + 0x830) = 0;
    }
    else {
      if (param_3 < DAT_006e92e4 != (NAN(param_3) || NAN(DAT_006e92e4))) {
        param_3 = -param_3;
      }
      *(float *)(param_1 + 0x830) = param_3;
    }
  }
  else {
    if (param_3 < DAT_006e92e4 != (NAN(param_3) || NAN(DAT_006e92e4))) {
      param_3 = -param_3;
    }
    *(float *)(param_1 + 0x830) = -param_3;
  }
  *(char *)(param_1 + 0x837) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x836) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x835) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x834) = (char)param_4;
  return;
}

