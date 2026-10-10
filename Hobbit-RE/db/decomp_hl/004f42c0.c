
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f42c0(int param_1)

{
  int iVar1;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  local_39 = 0xff;
  local_3a = 0;
  local_3b = 0;
  local_3c = 0;
  if (-1 < *(int *)(param_1 + 0x16c)) {
    iVar1 = FUN_0054ec80();
    if (iVar1 == 0) {
      if (100 < *(int *)(param_1 + 0x16c)) {
        *(undefined4 *)(param_1 + 0x16c) = 100;
      }
      local_34 = (float)_DAT_0072f360 * *(float *)(param_1 + 0x570);
      local_30 = (float)_DAT_0072f364 * *(float *)(param_1 + 0x570);
      local_38 = (float)__ftol();
      FUN_004f4940(local_1c,&local_38);
      local_38 = (float)*(int *)(param_1 + 0x16c) * *(float *)(param_1 + 0x570) * _DAT_006efa64;
      local_2c = _DAT_006efa60 * *(float *)(param_1 + 0x570);
      local_28 = *(float *)(param_1 + 0x570) * _DAT_006efa5c;
      local_24 = _DAT_006efa58 * *(float *)(param_1 + 0x570);
      local_20 = *(float *)(param_1 + 0x570) * _DAT_006efa54;
      FUN_004f48d0(local_10,local_1c,&local_24,&local_2c,&local_38);
      FUN_0066c3a0(7,0x17);
      FUN_0066db80(param_1 + 0x14,0);
      FUN_0066e5a0(local_1c,&local_34,0xffffffff);
      FUN_0066d9a0();
      FUN_0066b4f0(local_10,&local_3c,&local_3c,&local_3c,&local_3c,0);
    }
  }
  return;
}

