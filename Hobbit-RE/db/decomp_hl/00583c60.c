
void __fastcall FUN_00583c60(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x638);
  *puVar1 = 0x7fffffff;
  uVar2 = FUN_005496c0(s_blurred_sharp_star2_xbmp_007407fc,&DAT_0071ef4c);
  FUN_00549430(puVar1,uVar2);
  puVar3 = (undefined1 *)FUN_005493e0(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0075b6e0;
  }
  FUN_00548de0(puVar3);
  puVar1 = (undefined4 *)(param_1 + 0x63c);
  *puVar1 = 0x7fffffff;
  uVar2 = FUN_005496c0(s_blurred_spikey_star_xbmp_007407e0,&DAT_0071ef4c);
  FUN_00549430(puVar1,uVar2);
  puVar3 = (undefined1 *)FUN_005493e0(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0075b6e0;
  }
  FUN_00548de0(puVar3);
  return;
}

