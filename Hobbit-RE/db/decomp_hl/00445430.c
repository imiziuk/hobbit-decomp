
void __fastcall FUN_00445430(int *param_1)

{
  undefined1 *puStack_44;
  undefined1 local_38 [16];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  puStack_44 = local_38;
  FUN_00540900((float)param_1[0x248] * (float)param_1[0x1e5],local_1c);
  puStack_44 = local_10;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_28);
  puStack_44 = (undefined1 *)param_1[5];
  (**(code **)(*param_1 + 0x14))(&puStack_44,0);
  return;
}

