
void __fastcall FUN_0049a460(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [16];
  undefined1 local_10c;
  undefined4 local_10b [62];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d34cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_marker__OnImport_00729f80);
  local_10c = DAT_0075b6e0;
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  *(undefined2 *)puVar2 = 0;
  FUN_00640480(&DAT_00725c94,&local_10c);
  (**(code **)(*param_1 + 0x48))(&local_10c);
  FUN_00640480(&DAT_00729f78,param_1 + 0x30);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,auStack_11c);
  FUN_00640500(s_Orient_00726120,auStack_134);
  FUN_006403a0(s_Scale_00725a04,auStack_128);
  FUN_006404b0(&DAT_00726118,&stack0xfffffeac);
  FUN_0049a070(auStack_11c,auStack_134,auStack_128,&stack0xfffffeac);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

