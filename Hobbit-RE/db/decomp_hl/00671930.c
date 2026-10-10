
void __thiscall FUN_00671930(int param_1,undefined4 param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = NAN(DAT_006e92e4);
  bVar2 = param_3 == DAT_006e92e4;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  if ((NAN(param_3) || bVar1) == bVar2) {
    *(float *)(param_1 + 0x78) = param_3;
  }
  return;
}

