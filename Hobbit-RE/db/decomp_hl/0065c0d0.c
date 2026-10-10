
undefined4 FUN_0065c0d0(void)

{
  SystemParametersInfoA(0x3b,8,&DAT_007f0ff4,0);
  FUN_00662b50();
  FUN_00660da0();
  FUN_006702d0();
  ClipCursor((RECT *)0x0);
  FUN_00661e70();
  FUN_0066c340();
  FUN_006748a0();
  FUN_006712d0();
  FUN_0067d0a0();
  if (DAT_007f1000 != (int *)0x0) {
    (**(code **)(*DAT_007f1000 + 8))(DAT_007f1000);
  }
  if (DAT_007f0310 != (int *)0x0) {
    (**(code **)(*DAT_007f0310 + 8))(DAT_007f0310);
  }
  if (DAT_007edae0 != (int *)0x0) {
    (**(code **)(*DAT_007edae0 + 8))(DAT_007edae0);
  }
  UnregisterClassA(s_Hobbit_Window_Class_0074e308,DAT_007edad8);
  SystemParametersInfoA(0x11,1,(PVOID)0x0,2);
  FUN_006c09f2(0);
  FUN_00655460();
  return 0;
}

