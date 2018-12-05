
mkdir -p ../httpd

#cd OK_uip 
unrar x uip-0.9.rar
cp -rf httpd/*   ../httpd/
cp -rf uip-0.9/*  ../httpd/
rm -rf uip-0.9

cd ../httpd
patch -p1 < ../OK_uip/Step2_uip-0.9.patch
cd web_en; chmod +x ./do.sh;  ./do.sh
sleep 1;

cd ../..
patch -p1 < ./OK_uip/Step1_ralink_uip.patch

