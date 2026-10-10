
void __thiscall FUN_004de270(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_stack_0000001c;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0x120) & 8) != 0) {
    iVar2 = FUN_004de670();
    if ((iVar2 != 0) && (iVar2 = FUN_004de640(), iVar2 != 0)) {
      return;
    }
    local_40 = FUN_004021c0(param_2,param_3);
    if ((local_40 != 0) &&
       (uVar1 = *(uint *)(local_40 + 0x10), uVar3 = FUN_004de600(), (uVar1 & uVar3) != 0)) {
      local_3c = in_stack_0000001c;
      local_4 = 3;
      local_44 = param_1;
      FUN_004aab50(s_OnPain_0072e4a4,s_v_lobject_i_0072e4ac,&local_44);
    }
  }
  return;
}

