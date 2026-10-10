
void __fastcall FUN_004eab90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5ca8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_water__RenderCustom_0072ed88);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x1d2) & 2) != 0) {
    FUN_0065bb10(3);
    iVar2 = FUN_00549470(param_1 + 0x1e0);
    if (iVar2 != 0) {
      FUN_0066db80(iVar2,0);
      FUN_00549580(param_1 + 0x1e0);
      cVar1 = FUN_00555d80();
      if ((cVar1 == '\0') || (iVar2 = FUN_00555d70(), 2 < iVar2)) {
        uVar4 = 2;
        uVar3 = 1;
      }
      else {
        uVar4 = 1;
        uVar3 = 2;
      }
      iVar2 = FUN_00549470(param_1 + 0x1e4);
      if (iVar2 != 0) {
        FUN_0066db80(iVar2,uVar4);
        FUN_00549580(param_1 + 0x1e4);
        iVar2 = FUN_00549470(param_1 + 0x1e8);
        if (iVar2 != 0) {
          FUN_0066db80(iVar2,uVar3);
          FUN_00549580(param_1 + 0x1e8);
          FUN_0065fce0(0);
          FUN_00672260(local_24);
          FUN_0041b9f0(local_18,local_24);
          FUN_004357e0(local_18);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 0x32c)) {
            do {
              FUN_0066c3a0(4,6);
              (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,0);
              if ((char)((uint)unaff_ESI >> 0x18) == '\0') {
                (**(code **)(*DAT_007f1000 + 200))
                          (DAT_007f1000,0x3c,
                           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x1d0),
                                                      *(undefined1 *)(param_1 + 0x176)),
                                             *(byte *)(param_1 + 0x175)),*(byte *)(param_1 + 0x174))
                          );
                FUN_00554860(0,&DAT_0072ed80,&DAT_0072ed84);
                FUN_00554860(1,&DAT_0072ed84,&DAT_0072dd80);
                FUN_00554860(2,s_c__c_x_0072ed74,&DAT_0072ed7c);
                uVar5 = 3;
              }
              else {
                (**(code **)(*DAT_007f1000 + 200))
                          (DAT_007f1000,0x3c,
                           ((*(byte *)(param_1 + 0x176) | 0xffff8000) << 8 |
                           (uint)*(byte *)(param_1 + 0x175)) << 8 | (uint)*(byte *)(param_1 + 0x174)
                          );
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,1,4);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,2,2);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,3,3);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,4,4);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,5,3);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,6,0);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,1,0x12);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,2,1);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,3,2);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,4,2);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,5,0);
                (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,6,0);
                uVar5 = 2;
              }
              FUN_00554f00(uVar5);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x11,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x10,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x12,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0xd,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0xe,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0xb,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x18,0);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0x11,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0x10,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0x12,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0xb,0);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0x18,0);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0xd,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar3,0xe,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0x11,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0x10,2);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0x12,1);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xb,0);
              (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0x18,0);
              FUN_0066d9c0(param_1 + 0x1ec);
              FUN_0066e150(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x328),4);
              FUN_0066e120(0,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x328),8);
              FUN_0066e120(1,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x328),8);
              FUN_0066e180(*(undefined4 *)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),0xc);
              FUN_0066e550(*(int *)(param_1 + 0x324) + *(int *)(param_1 + 0x330) * iVar2 * 2,
                           *(int *)(param_1 + 0x330));
              FUN_0066d9a0();
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 0x32c));
          }
          DAT_00777a10 = DAT_00777a10 +
                         (*(short *)(param_1 + 0x1cc) * 2 + -2) * (*(short *)(param_1 + 0x1ce) + -1)
          ;
          DAT_00777a18 = DAT_00777a18 +
                         (*(short *)(param_1 + 0x1cc) * 2 + -2) * (*(short *)(param_1 + 0x1ce) + -1)
          ;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

