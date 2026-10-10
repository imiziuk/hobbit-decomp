
void __thiscall FUN_00454000(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d00bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  local_4 = 0;
  FUN_00641400(s_MinSilenceTime_00725094,*(undefined4 *)(param_1 + 0x270));
  FUN_00641400(s_MaxSilenceTime_00725084,*(undefined4 *)(param_1 + 0x274));
  FUN_00641400(s_VolumeFadeTime_00725074,*(undefined4 *)(param_1 + 0x278));
  local_10c = 0;
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  FUN_00648a10(*(undefined4 *)(param_1 + 0x120),&local_10c);
  FUN_006414f0(s_AudioPackageName_00725060,&local_10c);
  FUN_004aa650(param_2);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

