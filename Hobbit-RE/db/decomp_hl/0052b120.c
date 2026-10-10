
void FUN_0052b120(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined4 *local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined1 *local_4b0;
  undefined1 local_4ac [4];
  undefined4 local_4a8 [7];
  undefined4 local_48c [288];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d816b;
  local_c = ExceptionList;
  local_4d4 = (undefined4 *)0x52b14a;
  ExceptionList = &local_c;
  FUN_00671410();
  local_4d4 = (undefined4 *)0x47435000;
  local_4 = 0;
  FUN_00671650(0x41200000);
  local_4d4 = (undefined4 *)0x0;
  FUN_00671930(0x42c80000);
  local_4d4 = &local_4bc;
  local_4bc = 0x44a98000;
  local_4b8 = 0xc4f04000;
  local_4b4 = 0xc38e8000;
  FUN_00671670();
  local_4d4 = (undefined4 *)0x0;
  local_4bc = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  FUN_006723d0(&local_4bc);
  local_4d4 = local_4a8;
  FUN_0065f8a0(local_4ac);
  local_4d4 = (undefined4 *)0x52b1d1;
  FUN_0064cbe0();
  bVar1 = false;
  local_4d4 = (undefined4 *)0x52b1dc;
  FUN_0064cc00();
  local_4d4 = (undefined4 *)0x52b1f0;
  fVar3 = (float10)FUN_0064cd90();
  if (fVar3 < (float10)param_3 != (NAN(fVar3) || NAN((float10)param_3))) {
    do {
      if (bVar1) break;
      local_4d4 = local_48c;
      FUN_0065f910();
      FUN_0065f960(local_48c,0);
      FUN_0065fc10(0);
      local_4b0 = (undefined1 *)&local_4d4;
      local_4d4 = (undefined4 *)0xff000000;
      FUN_0065f940();
      iVar2 = FUN_0065f190(s_Legal_0073061c);
      if (iVar2 != 0) {
        local_4d4 = param_1;
        FUN_0052b0f0(0xc);
        local_4d4 = (undefined4 *)0x52b263;
        FUN_0065f430();
      }
      local_4d4 = (undefined4 *)0x52b268;
      FUN_0065f480();
      if (param_2 != 0) {
        local_4d4 = (undefined4 *)0x52b276;
        iVar2 = FUN_0066f810();
        if (iVar2 != 0) {
          local_4d4 = (undefined4 *)0x0;
          iVar2 = FUN_006710d0(2);
          if (iVar2 != 0) {
            bVar1 = true;
          }
          local_4d4 = (undefined4 *)0x0;
          iVar2 = FUN_00670ef0(0xb9);
          if (iVar2 == 0) {
            local_4d4 = (undefined4 *)0x0;
            iVar2 = FUN_00670ef0(0xd6);
            if (iVar2 == 0) {
              local_4d4 = (undefined4 *)0x0;
              iVar2 = FUN_006710d0(0x5d);
              if (iVar2 == 0) goto LAB_0052b2c6;
            }
          }
          bVar1 = true;
        }
      }
LAB_0052b2c6:
      local_4d4 = (undefined4 *)0x52b2cf;
      fVar3 = (float10)FUN_0064cd90();
    } while (fVar3 < (float10)param_3 != (NAN(fVar3) || NAN((float10)param_3)));
  }
  local_4 = 0xffffffff;
  local_4d4 = (undefined4 *)0x52b2f2;
  FUN_00671570();
  ExceptionList = local_c;
  return;
}

